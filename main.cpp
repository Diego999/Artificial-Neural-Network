#include "Tests/tests.h"

int main(int argc, char* argv[])
{
    testsANN();
    testsANNController();

    testMergeVector();
    testCreateSubSamples();
    testKFoldCrossValidation();

    return 0;
}
