# Ifndef GRAFO_H
# Define  GRAFO_H

clase  Grafo {
protegido:
	mapa < int , vector < int >> saliente;
público:
	Grafo ( const vector < int > & inicioP, const vector < int > & FINP);
	int  numOutgoing ( const  int nodeID) const ;
	const vector < int > & adyacente ( const  int nodeID) const ;
};

# endif
