#include <iostream>


#include "CGALComponents.h"
#include "ConvexHullAlgorithms.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // this plot function will generate the time comparison for
    // both the grahamscan and jarvis march algo. For generating thr graph/plot
    // need another special command with for a.txt and b.txt

//    gnuplot -p -e "plot ’a.txt’ using 1:2 with linespoints lw 3 pt 7 title
//    ’GrahamsScan’, ’a.txt’ using 1:3 with linespoints lw 3 pt 7 title ’JarvisMarch’ "

    //plot();
    correctnessCheck();


//    unsigned numberOfPoints = 10;
//    unsigned sizeOfSquare = 300;
//
//    std::vector<Point> P;
//
//    generatePointsInsideASquare(numberOfPoints,sizeOfSquare,P);
//    //generateConvexPointSetInsideASquare(numberOfPoints,sizeOfSquare,P);
//
//    vector<unsigned> idsOfConvexHullPoints;
//    jarvisMarch(P,idsOfConvexHullPoints);




////    P.emplace_back(100,100);
////    P.emplace_back(200,200);
////    P.emplace_back(200,000);
////    P.emplace_back(200,400);
////    P.emplace_back(300,300);
////    P.emplace_back(400,200);
//
////    P.emplace_back(100,200);
////    P.emplace_back(200,200);
////    P.emplace_back(400,200);
//
//
//    vector<unsigned> idsOfConvexHullPoints;
//    //jarvisMarch(P,idsOfConvexHullPoints);
//    grahamsScan(P,idsOfConvexHullPoints);
    return 0;
}
