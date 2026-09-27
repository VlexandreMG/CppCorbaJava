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

            // Narrowing vers l'interface helper 

            // Appel distant de la fonction dans le serveur C++ 

        System.out.println("[CLIENT JAVA] Prêt à interagir avec le serveur C++");

            // Nettoyage 
        orb.destroy();
        } catch (Exception e) {
            System.err.println("[ERREUR CLIENT JAVA] : "+ e.getMessage());
            e.printStackTrace();
        }
    }
}