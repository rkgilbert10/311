/**
 * @file CensusDataSorts.cpp   Sort functions for census population data.
 * 
 * @brief
 *    Implements several different types of sorts. Data can be sorted
 * by population or by name of town. This file contains all of the sorting
 * functions and their helpers.
 *
 * @author Judy Challinger
 * @date 2/22/13
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "CensusData.h"

// formal parameter name commented out to avoid unused variable warning
void CensusData::insertionSort(int type) {
    int dataSize=this->data.size();
    Record* key;
    int j, i;
    if (type == 0) { //Sort by Population
        for (j=1; j<dataSize; j++) {
            key = data[j];
            i = j-1;
        while (i>=0 && data[i]->population > key->population) {
            data[i+1] = data[i];
            i=i-1;
        }
        data[i+1]= key;
            
        }
    } else { //Sort by City Name
        for (j=1; j<dataSize; j++) {
            key = data[j];
            i = j-1;
            //While loop is dereferenced to compare names - instead of int
        while (i>=0 && *(data[i]->city) > *(key->city)) {
            data[i+1] = data[i];
            i=i-1;
        }
        data[i+1]= key;
            
        }
    }
}

// formal parameter name commented out to avoid unused variable warning
void CensusData::mergeSort(int /*type*/) {
}

// formal parameter name commented out to avoid unused variable warning
void CensusData::quickSort(int /*type*/) {
}
