# Incluir  " Grafo.h "
# Incluir  < stdexcept >

Grafo :: Grafo ( const vector < int > & inicioP, const vector < int > & Finalp) {
	si (inicioP. tamaño ()! = Finalp. tamaño ()) {
		tirar  invalid_argument ( " Inicio de No Tiene El Mismo Tamaño definitiva Que " );
	}
	para ( sin signo de i = 0 ; i <inicioP. tamaño (); i ++) {
		int inicio = inicioP [i], aleta = Finalp [i];
		saliente [Inicio]. push_back (fin);
		saliente [fin];
	}
}
int Grafo :: numOutgoing ( const  int nodeID) const {
	volver  adyacente (nodeID). tamaño ();
}

const vector < int > & Grafo :: adyacente ( const  int nodeID) const {
	mapa < int , vector < int >> :: const_iterator i = saliente. encontrar (nodeID)
																	 ;
	si (i == saliente. aleta ()) {
		tirar  invalid_argument ( " Nodo invalido ID " );
	}
	volver i-> segundos;
}
