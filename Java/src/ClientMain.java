package src;

import org.omg.CORBA.ORB;
import org.omg.CORBA.Object;
import java.io.BufferedReader;
import java.io.FileReader;

public class ClientMain {
    public static void main(String[] args) {
        try {
            // Initialiser l'ORB 
        ORB orb = ORB.init(args, null);

            // Recupération de l'IOR au serveur C++ 
        BufferedReader br = new BufferedReader(new FileReader("server.ior"));
        String iorStr = br.readLine();
        br.close();


        } catch (Exception e) {
            System.err.println("[ERREUR CLIENT JAVA] : "+ e.getMessage());
            e.printStackTrace();
        }
    }
}