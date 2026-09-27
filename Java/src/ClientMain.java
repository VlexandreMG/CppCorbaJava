package src;

import org.omg.CORBA.ORB;
import org.omg.CORBA.Object;

public class ClientMain {
    public static void main(String[] args) {
        try {
            // Initialiser l'ORB 
        ORB orb = ORB.init(args, null);


        } catch (Exception e) {
            System.err.println("[ERREUR CLIENT JAVA] : "+ e.getMessage());
            e.printStackTrace();
        }
    }
}