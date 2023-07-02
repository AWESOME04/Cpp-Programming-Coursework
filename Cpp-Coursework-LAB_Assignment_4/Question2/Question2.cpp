// Student ID: 10987644
// Name: Evans Acheampong
// Question 2

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    // Declaring the variables for the student name and scores
    string st_name;
    double score_1, score_2, score_3, score_4, score_5, AvgScore;

    // Sample Data
    st_name = "Evans";
    score_1 = 87.32;
    score_2 = 93.12;
    score_3 = 95.23;
    score_4 = 79.21;
    score_5 = 90.00;

    // Opening the input file
    ifstream infile("test.txt");

    // Reading data from the specified file
    infile >> st_name >> score_1 >> score_2 >> score_3 >> score_4 >> score_5;

    // Calculating the average of the 5 scores
    AvgScore = (score_1 + score_2 + score_3 + score_4 + score_5) / 5.0;

    // Opening the output file
    ofstream outfile("testavg.out.2");

    // Writing data to output file
    outfile << fixed << setprecision(2);
    outfile << "Student name: " << st_name << endl;
    outfile << "Test scores: " << score_1 << " " << score_2 << " " << score_3 << " " << score_4 << " " << score_5 << endl;
    outfile << "Average test score: " << AvgScore << endl;

    // Closing the files
    infile.close();
    outfile.close();

    return 0;
}
















