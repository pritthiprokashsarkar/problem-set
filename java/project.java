import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class project {
    public static void main(String[] args) {
        
        JFrame frame = new JFrame("Login Form");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 150);

        
        JPanel panel = new JPanel();
        frame.add(panel);
        placeComponents(panel);

        
        frame.setVisible(true);
    }

    private static void placeComponents(JPanel panel) {
        panel.setLayout(null);

        JLabel userLabel = new JLabel("User:");
        userLabel.setBounds(10, 20, 80, 25);
        panel.add(userLabel);

        JTextField userText = new JTextField(20);
        userText.setBounds(100, 20, 165, 25);
        panel.add(userText);

        JLabel passwordLabel = new JLabel("Password:");
        passwordLabel.setBounds(10, 50, 80, 25);
        panel.add(passwordLabel);

        JPasswordField passwordText = new JPasswordField(20);
        passwordText.setBounds(100, 50, 165, 25);
        panel.add(passwordText);

        JButton loginButton = new JButton("Submit");
        loginButton.setBounds(10, 80, 80, 25);
        panel.add(loginButton);

        JLabel messageLabel = new JLabel("");
        messageLabel.setBounds(100, 80, 200, 25);
        panel.add(messageLabel);

        loginButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String username = userText.getText();
                String password = new String(passwordText.getPassword());

                
                if (username.equals("admin") && password.equals("password123")) {
                    messageLabel.setText("Login Successful");
                } else {
                    messageLabel.setText("Invalid login/password");
                }
            }
        });
    }
}

/*
 class A {
    int x;

    public A() {
        x = 0;
    }

    public A(int x) {
        this.x = x;
    }

    public int getX() {
        return (x + 10);
    }
}

    class B extends A {
        int x = 20;

       public B()
        {
            super(10);
        }
        public int getX() {
            return super.getX();
        }
    }


public class java_7_1 {
    public static void main(String[] args) {
       B b=new B();
      System.out.println(b.getX());

    }
}
 */