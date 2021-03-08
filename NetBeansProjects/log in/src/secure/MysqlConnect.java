/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package secure;
import java.sql.*;
import javax.swing.*;
/**
 *
 * @author DCL
 */
public class MysqlConnect {
    Connection conn=null;
    public static Connection ConnectDB(){
        try{
            Class.forName("conn.mysql.jdbc.Driver");
            Connection conn= DriverManager.getConnection("jdbc.mysql://localhost/technosoft","root","05121949");
            return conn;
        }catch(Exception e){
            JOptionPane.showMessageDialog(null, e);
            return null;
        }
    
    } 
}
