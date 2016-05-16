package com.test.java;

import java.io.*;
import java.util.*;
import javax.comm.*;
import javax.imageio.*;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

import com.test.java.Reader;

public class MP extends JFrame {
	private CommPortIdentifier commPortIdentifier;
	private CommPort commPort;
	private SerialPort serialPort;
	private OutputStream os;
	private InputStream is;
	private ImageIcon im;
	private JLabel lavel;
	public byte[] buff = new byte[28];

	public MP(String portName) {
		setTitle("HomeNetWork");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		im = new ImageIcon("Back.jpg");
		this.setIconImage(im.getImage());
		setSize(567, 486);

		lavel = new JLabel(im);

		this.getContentPane().add(lavel);

		setVisible(true);
		getContentPane().setLayout(null);

		try {
			this.commPortIdentifier = CommPortIdentifier.getPortIdentifier(portName);

			if (commPortIdentifier.isCurrentlyOwned()) {
				System.out.println("ERROR");
			} else {
				this.commPort = commPortIdentifier.open(this.getClass().getName(), 2000);
				if (this.commPort instanceof SerialPort) {
					serialPort = (SerialPort) commPort;
					serialPort.setSerialPortParams(57600, SerialPort.DATABITS_8, SerialPort.STOPBITS_1,
							SerialPort.PARITY_NONE);

					is = serialPort.getInputStream();
					os = serialPort.getOutputStream();

				}
			}
		} catch (Exception e1) {
			e1.printStackTrace();
		}

		Thread Lis = new Thread(new Reader(is, os));
		Lis.start();

		JButton Doorlock = new JButton("\uB3C4\uC5B4\uB77D \uC81C\uC5B4");
		Doorlock.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				// Doorlock
				try {
					for (int i = 0; i < Door.length; i++) {
						os.write(Door[i]);
					}
				} catch (Exception e1) {
					e1.printStackTrace();
				}
			}
		});
		Doorlock.setBounds(206, 246, 120, 23);
		getContentPane().add(Doorlock);

		JButton GasClose = new JButton("\uAC00\uC2A4 OFF");
		GasClose.setForeground(Color.black);
		GasClose.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				// GasClose
				try {
					for (int i = 0; i < ShutterClose.length; i++) {
						os.write(ShutterClose[i]);
					}
				} catch (Exception e1) {
					e1.printStackTrace();
				}
			}
		});
		GasClose.setBounds(137, 279, 120, 23);
		getContentPane().add(GasClose);

		JButton GasOpen = new JButton("\uAC00\uC2A4 ON");
		GasOpen.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				// GasOpen
				try {
					for (int i = 0; i < ShutterOpen.length; i++) {
						os.write(ShutterOpen[i]);
					}
				} catch (Exception e1) {
					e1.printStackTrace();
				}
			}
		});
		GasOpen.setBounds(269, 279, 120, 23);
		getContentPane().add(GasOpen);

		JButton OutletOff = new JButton("\uCF58\uC13C\uD2B8 OFF");
		OutletOff.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				// Outletoff
				try {
					for (int i = 0; i < OutletOFF.length; i++) {
						os.write(OutletOFF[i]);
					}
				} catch (Exception e1) {
					e1.printStackTrace();
				}
			}
		});
		OutletOff.setBounds(137, 312, 120, 23);
		getContentPane().add(OutletOff);

		JButton OutletON = new JButton("\uCF58\uC13C\uD2B8 ON");
		OutletON.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				// OutletON
				try {
					for (int i = 0; i < OutletOn.length; i++) {
						os.write(OutletOn[i]);
					}
				} catch (Exception e1) {
					e1.printStackTrace();
				}
			}
		});
		OutletON.setBounds(269, 312, 120, 23);
		getContentPane().add(OutletON);

		// JButton GetData = new JButton("\uB370\uC774\uD130 \uC218\uC9D1");
		// GetData.addActionListener(new ActionListener() {
		// public void actionPerformed(ActionEvent arg0) {
		// // GetData
		// try {
		// for (int i = 0; i < Data.length; i++) {
		// os.write(Data[i]);
		// }
		// } catch (Exception e1) {
		// e1.printStackTrace();
		// }
		//
		// }
		// });
		// GetData.setBounds(206, 213, 120, 23);
		// getContentPane().add(GetData);

		setVisible(true);
	};

	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					MP frame = new MP("COM5");
					// frame.setVisible(true);

				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public void destroy() {
		try {
			os.close();
			serialPort.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
		commPort.close();
	}

	static byte[] Data = { (byte) 0x7E, (byte) 0x44, (byte) 0x00, (byte) 0x00, (byte) 0xFF, (byte) 0xFF, (byte) 0xFF,
			(byte) 0xFF, (byte) 0x04, (byte) 0xAA, (byte) 0x09, (byte) 0x1F, (byte) 0x01, (byte) 0x05, (byte) 0x00,
			(byte) 0x7E };

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

}