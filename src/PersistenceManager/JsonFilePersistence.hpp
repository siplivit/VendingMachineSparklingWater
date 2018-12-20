/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JsonFilePersistence.hpp
 * Author: vitalii
 *
 * Created on December 19, 2018, 10:28 AM
 */

#ifndef JSONFILEPERSISTENCE_HPP
#define JSONFILEPERSISTENCE_HPP

#include <cstdlib>
#include <fstream>
#include <iostream>

#include "IPersistenceOperations.hpp"
#include "../../libs/json/src/json.hpp"
#include "../Types/Settings.hpp"

using json = nlohmann::json;

using namespace std;

class JsonFilePersistence : public IPersistenceOperations
{
public:
        
    JsonFilePersistence(const std::string& f);
                
    bool readSettings(Settings& s) override;
    bool saveSettings(const Settings& s) override;
    
    void setFileName(const std::string s);
    std::string getFileName();

private:
    std::string fileName;
};

namespace settingstypes {
    
    void to_json(json& j, const Settings& p);
    void from_json(const json& j, Settings& p);
}

#endif /* JSONFILEPERSISTENCE_HPP */

