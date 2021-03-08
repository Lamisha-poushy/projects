
import static com.oracle.webservices.internal.api.databinding.DatabindingModeFeature.ID;
import static com.sun.xml.internal.ws.policy.sourcemodel.wspolicy.XmlToken.Name;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.swing.JOptionPane;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Poushy
 */
public class f_info {
   private void signinActionPerformed(java.awt.event.ActionEvent evt) throws ClassNotFoundException, SQLException {
    try {
    Class.forName("com.microsoft.sqlserver.jdbc.SQLSERVERDriver");
    String query="Select * from f_info(ID,Name,Address,Email,Phone)values(?,?,?,?)";
        String url = null;
    Connection conn= DriverManager.getConnection(url);
    PreparedStatement pst =conn.prepareStatement(query);
    pst.setString(1,ID.getText());
    pst.setString(2,Name.getText());
    ResultSet rs= pst.executeQuery();
    
    }
    JOptionPane.showMessageDialog(null,"inserted successfully");
   }
   
    
}
    catch (Exception e){
        JOptionPane.showMessageDialog(null,e);
    }
    

