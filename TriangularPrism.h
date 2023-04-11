//
//  TriangularPrism.h
//  CS 232 Triangular Prism Lab
//
//  Created by Melissa Gio on 3/20/23.
//

#ifndef TriangularPrism_h
#define TriangularPrism_h

class TriangularPrism {
    public:
    int getBase();
    void setBase(int basePar);
    void displayTriangularPrism();
    void drawSpaces(int numOfSpacesPar);
    void drawStars(int numOfStarsPar);
    
    TriangularPrism(); //default constructor
    TriangularPrism(int basePar); //overload constructor
    
    
    private:
    int base;
    int stars;
    int spacesBefore;
    int spacesInRect;
    int spacesInTriangle;
    
};

#endif /* TriangularPrism_h */
