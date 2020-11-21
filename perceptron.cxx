#include <iostream>
#include <cmath>

using namespace std;

double neuronActivationFunction( double neuronValue ) {
	double E = std::exp(1.0);
	double negNeuronValue = neuronValue * -1;
	cout << "u: " << neuronValue << endl;
	cout << "E: " << E << endl;
	cout << "-u: " << negNeuronValue << endl << endl;
	return (1 / (1 + pow( std::exp(1.0), (neuronValue * -1 ) )));
}

int main() {
	double input1 = 1, weightInput1 = 0.1;
	double input2 = 2, weightInput2 = 0.2;
	double input3 = 3, weightInput3 = 0.3;
	double neuron = 0;

	neuron += input1 * weightInput1;
	neuron += input2 * weightInput2;
	neuron += input3 * weightInput3;


	// Activation Function, any function with contraints
	const double activationValue = neuronActivationFunction( neuron );

	cout << "ActivationValue: " << activationValue << endl;


	return 0;
}
