package com.test.java;

import javax.comm.*;
import java.io.*;

public class Reader implements Runnable {
	private InputStream is;
	private OutputStream os;
	private byte[] buff = new byte[28];

	static byte[] Data1 = { (byte) 0x7E, (byte) 0x45, (byte) 0x00, (byte) 0xFF, (byte) 0xFF, (byte) 0xFF, (byte) 0xFF,
			(byte) 0x04, (byte) 0xAA, (byte) 0x09, (byte) 0x01, (byte) 0x03, (byte) 0x01, (byte) 0x00, (byte) 0x6E,
			(byte) 0xC5, (byte) 0x7E };

	static byte[] Data2 = { (byte) 0x7E, (byte) 0x45, (byte) 0x00, (byte) 0xFF, (byte) 0xFF, (byte) 0xFF, (byte) 0xFF,
			(byte) 0x04, (byte) 0xAA, (byte) 0x09, (byte) 0x01, (byte) 0x03, (byte) 0x02, (byte) 0x00, (byte) 0x6E,
			(byte) 0xC5, (byte) 0x7E };

	static byte[] Door = { (byte) 0x7E, (byte) 0x44, (byte) 0x00, (byte) 0x00, (byte) 0xFF, (byte) 0xFF, (byte) 0xFF,
			(byte) 0xFF, (byte) 0x06, (byte) 0xAA, (byte) 0x09, (byte) 0x1F, (byte) 0x02, (byte) 0xF4, (byte) 0x01,
			(byte) 0xA7, (byte) 0x19, (byte) 0x7E };// 68

	static byte[] ShutterOpen = { (byte) 0x7E, (byte) 0x44, (byte) 0x00, (byte) 0x00, (byte) 0xFF, (byte) 0xFF,
			(byte) 0xFF, (byte) 0xFF, (byte) 0x04, (byte) 0xAA, (byte) 0x09, (byte) 0x33, (byte) 0x02, (byte) 0x17,
			(byte) 0x00, (byte) 0x6C, (byte) 0x30, (byte) 0x7E };

	static byte[] ShutterClose = { (byte) 0x7E, (byte) 0x44, (byte) 0x00, (byte) 0x00, (byte) 0xFF, (byte) 0xFF,
			(byte) 0xFF, (byte) 0xFF, (byte) 0x04, (byte) 0xAA, (byte) 0x09, (byte) 0x33, (byte) 0x02, (byte) 0x18,
			(byte) 0x00, (byte) 0x52, (byte) 0x20, (byte) 0x7E };

	static byte[] OutletOn = { (byte) 0x7E, (byte) 0x44, (byte) 0x00, (byte) 0x00, (byte) 0xFF, (byte) 0xFF,
			(byte) 0xFF, (byte) 0xFF, (byte) 0x04, (byte) 0xAA, (byte) 0x09, (byte) 0x3D, (byte) 0x02, (byte) 0x0D,
			(byte) 0x00, (byte) 0x8E, (byte) 0x7D, (byte) 0x5E, (byte) 0x7E };

	static byte[] OutletOFF = { (byte) 0x7E, (byte) 0x44, (byte) 0x00, (byte) 0x00, (byte) 0xFF, (byte) 0xFF,
			(byte) 0xFF, (byte) 0xFF, (byte) 0x06, (byte) 0xAA, (byte) 0x09, (byte) 0x3D, (byte) 0x02, (byte) 0x0E,
			(byte) 0x02, (byte) 0xFF, (byte) 0xFF, (byte) 0xC4, (byte) 0x75, (byte) 0x7E };

	public Reader(InputStream is, OutputStream os) {
		this.is = is;
		this.os = os;
	}

	@Override
	public void run() {

		int len = -1;
		try {
			while ((len = this.is.read(buff)) > 1) {

				if (buff[12] == Data1[12]) { // 가스 누출이 감지된 경우
					try {
						for (int i = 0; i < Door.length; i++) {
							os.write(Door[i]);
						}
						for (int i = 0; i < ShutterClose.length; i++) {
							os.write(ShutterClose[i]);
						}
						for (int i = 0; i < OutletOFF.length; i++) {
							os.write(OutletOFF[i]);
						}
					} catch (Exception e1) {
						e1.printStackTrace();
					}
					;
				} else if (buff[12] == Data2[12]) { // 가스 누출 감지 후 정상으로 된 경우
					try {
						for (int i = 0; i < OutletOn.length; i++) {
							os.write(OutletOn[i]);
						}
						for (int i = 0; i < ShutterOpen.length; i++) {
							os.write(ShutterOpen[i]);
						}
					} catch (Exception e1) {
						e1.printStackTrace();
					}
				}

			}
			this.is.read(buff);

			while (this.is.available() > 0) {
				for (int i = 0; i < buff.length; i++) {
					System.out.printf(" %x ", buff[i]);
				}
				System.out.println();
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
