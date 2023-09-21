import java.awt.event.ActionListener;

import javax.swing.*;
class Home implements ActionListener
{
JFrame f1;
JButton b1,b2,b3,b4;

JLabel l1,l2;
public Home() // constructor
{
f1=new JFrame("Home");
f1.setLayout(null);

b1=new JButton("Registration");
b2=new JButton("Course");
b3=new JButton("Fee Structure");
b4=new JButton("Attendence");

b1.setBounds(30,30,120,30);
b2.setBounds(30,80,120,30);
b3.setBounds(30,130,120,30);
b4.setBounds(30,180,120,30);

f1.add(b1);
b1.
f1.add(b2);
f1.add(b3);
f1.add(b4);

f1.setSize(500,600);
f1.setVisible(true);
}
public void actionPerformed(ActionEvent e1)
{
	if(e1.getSource()==b1)
	{
		RegistrationForm rg = new RegistrationForm();
	}
	
}}


