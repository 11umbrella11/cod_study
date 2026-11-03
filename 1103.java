import javax.swing.*;
import java.awt.*;

public class JFrameEx extends JFrame{
  public JFrameEx(){
    setTitle("JFrame");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    Container c = getContentPane();
    c.setBackground(Coloe.ORANGE);
    c.setLayout(new FlowLayout(FlowLayout.RIGHT, 50, 60));
  
    c.add(new JButton("확인"));
    c.add(new JButton("취소"));
    c.add(new JButton("무시"));

    setSize(300, 150);
    setVisible(true);
  }
    static void main(String[] args){
      new ContentPaneEx();
    }
  
}
