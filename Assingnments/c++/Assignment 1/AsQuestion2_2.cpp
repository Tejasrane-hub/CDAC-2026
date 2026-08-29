#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


// --------------------------------------------------
// 1. Compute RMS
// --------------------------------------------------

double computeRMS(double *signal, int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        // Pointer arithmetic
        sum = sum + (*(signal + i) * *(signal + i));
    }

    return sqrt(sum / n);
}


// --------------------------------------------------
// 2. Normalise
// Divides every element by maximum absolute value
// --------------------------------------------------

void normalise(double *signal, int n)
{
    double maxValue = 0;

    // Find maximum absolute value
    for (int i = 0; i < n; i++)
    {
        if (abs(*(signal + i)) > maxValue)
        {
            maxValue = abs(*(signal + i));
        }
    }

    // Divide every element by max absolute value
    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) / maxValue;
    }
}


// --------------------------------------------------
// 3. Count Zero Crossings
// --------------------------------------------------

int countZeroCrossings(double *signal, int n)
{
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // Check if adjacent values have opposite signs
        if ((*(signal + i) < 0 && *(signal + i + 1) > 0) ||
            (*(signal + i) > 0 && *(signal + i + 1) < 0))
        {
            count++;
        }
    }

    return count;
}


// --------------------------------------------------
// 4. Apply Gain
// --------------------------------------------------

void applyGain(double *signal, int n, double gainFactor)
{
    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) * gainFactor;
    }
}


// --------------------------------------------------
// Print Array
// --------------------------------------------------

void printArray(double *signal, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(signal + i) << " ";
    }

    cout << endl;
}

int main()
{
    double signal[] = { 0.5,-1.2,0.8,-0.3,1.0,-0.9,0.1 };

    int n = 7;

    double gainFactor = 2.0;

    cout << fixed << setprecision(4);


    // ------------------------------------------
    // Original signal
    // ------------------------------------------

    cout << "Original Signal : ";
    printArray(signal, n);


    // ------------------------------------------
    // Compute RMS
    // ------------------------------------------

    double rms = computeRMS(signal, n);

    cout << "RMS : " << rms << endl;


    // ------------------------------------------
    // Count Zero Crossings
    // ------------------------------------------

    int crossings = countZeroCrossings(signal, n);

    cout << "Zero Crossings : " << crossings << endl;


    // ------------------------------------------
    // Normalise
    // ------------------------------------------

    normalise(signal, n);

    cout << "After Normalise : ";
    printArray(signal, n);


    // ------------------------------------------
    // Apply Gain
    // ------------------------------------------

    applyGain(signal, n, gainFactor);

    cout << "After Gain (" << gainFactor << ") : ";
    printArray(signal, n);


    return 0;
}