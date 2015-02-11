# Artificial-Neural-Network
Artificial Neural Network using multilayer perceptrons, stochastic gradient descent, back propagation and momentum. It has the same properties which are described in the book "Machine Learning" by Tom Michell.

The original ANN was developped during the project https://github.com/Diego999/Image-Processing-Project and was cleaned to be independant.

The ANN is prepared reading input from picture (with OpenCV), however it is very easy to change the filling the inputs by another way.
By the way, you MUST change how you set the target in function TraningController::generateTarget !

# Compilation

If you use OpenCV to fill the inputs : 

```g++ -O3 -std=c++11 `pkg-config --cflags opencv` main.cpp Controller/*.cpp NeuralNetwork/*.cpp Picture/*.cpp Tests/*.cpp Utils/*.cpp `pkg-config --libs opencv` -o output```

Otherwise, you should simply remove opencv from the command line
