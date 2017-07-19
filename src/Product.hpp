/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.hpp
 * Author: vitaliy
 *
 * Created on July 20, 2017, 1:43 AM
 */

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>
#include "Syrup.hpp"
#include "SyrupPump.hpp"

class Product {
private:
protected:
    int productID;
    std::string name;
    int price;              //  in cents
    Syrup* syrup;
    SyrupPump* syruppump;
public:
    Product();
    Product(int _pID,std::string str, int prc, Syrup* srp, SyrupPump* srpp): productID(_pID), name(str), price(prc), syrup(srp), syruppump(srpp){}
    
    int setProductID(int _pID){ productID = _pID; }
    int getProductID(void){ return productID; }
    
    int setName(std::string str) { name = str; }
    std::string& getName(void) { return name; }
    
    int setPrice(int prs) { price = prs; }
    int getPrice(void) { return price; }
    
    int setSyrup(Syrup* srp) { syrup = srp; }
    Syrup* getSyrup(void) { return syrup; }
    int removeSyrup(void) { syrup = NULL; }
    
    int setSyrupPump(SyrupPump* srp) { syruppump = srp; }
    SyrupPump* getSyrupPump(void) { return syruppump; }
    int removeSyrupPump(void) { syruppump = NULL; }
    
    virtual ~Product() { syrup = NULL;
        syruppump = NULL;
    }    // ??? Do we need to delete pointer if we didn't allocate memory?
};

#endif /* PRODUCT_HPP */

