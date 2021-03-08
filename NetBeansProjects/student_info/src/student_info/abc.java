/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package student_info;

import java.sql.DriverManager;

/**
 *
 * @author Poushy
 */
class abc {
    connection con;

    abc() {
        this.con = (connection) DriverManager.getConnection("jdbc:derby://localhost:1527/student_info","poushy","827172");
    }
    
}
