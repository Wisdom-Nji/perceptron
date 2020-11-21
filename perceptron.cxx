// Implementation based on paper
// https://www.researchgate.net/profile/Nikolay_Raychev5/publication/343554356_Mathematical_foundations_of_neural_networks_Implementing_a_perceptron_from_scratch/links/5f313f1492851cd302ec07d6/Mathematical-foundations-of-neural-networks-Implementing-a-perceptron-from-scratch.pdf


#include <iostream>
#include <cmath>

using namespace std;

class Node {
	private:
	// If we need to store them
	// multimap<double, double> inputWeights;
	double value = 0;
	double activationFunction( double );

	public:
	Node(){};

	void setInput( double input, double weight );
	double getNeuronValue();
};

void Node::setInput( double input, double weight ) {
	this->value += input * weight;
}

double Node::getNeuronValue() {
	return this->activationFunction( this->value );
}

double Node::activationFunction( double neuronValue ) {
	double E = std::exp(1.0);
	double negNeuronValue = neuronValue * -1;
	// cout << "u: " << neuronValue << endl;
	// cout << "E: " << E << endl;
	// cout << "-u: " << negNeuronValue << endl << endl;
	return (1 / (1 + pow( std::exp(1.0), (neuronValue * -1 ) )));
}

int main() {
	Node node = Node();
	double input1 = 1, weightInput1 = 0.1;
	double input2 = 2, weightInput2 = 0.2;
	double input3 = 3, weightInput3 = 0.3;
	double neuron = 0;

	node.setInput( input1, weightInput1 );
	node.setInput( input2, weightInput2 );
	node.setInput( input3, weightInput3 );

	// Activation Function, any function with contraints
	const double activationValue = node.getNeuronValue();
	cout << "ActivationValue: " << activationValue << endl;


	return 0;
}
