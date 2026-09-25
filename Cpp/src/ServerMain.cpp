#include <iostream>
#include <omniORB4/CORBA.h>

int main(int argc, char* argv[]) {
    try {
        // Initialisation de l'ORB 
        CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);

        // Intialisation du POA 
        CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");
        PortableServer::POA_var poa = PortableServer::POA::_narrow(obj);

        // Activer le POA Manager 
        PortableServer::POAManager_var pman = poa->the_POAManager();
        pman->activate();

        // Instancier le servant (à l'avenir)


        // Lancer le serveur 
        std::cout << "[SERVEUR IS WORKING]...." << std::endl;
        orb->run();
    } catch (const CORBA::Exception& ex) {
        std::cerr << "[ERREUR CORBA] : " << ex._name() << std::endl;
        return 1;
    }
    return 0;
};