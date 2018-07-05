/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Events.hpp
 * Author: vitalii
 *
 * Created on July 2, 2018, 1:48 AM
 */

#pragma once

#include <boost/statechart/event.hpp>
#include <iostream>


namespace sc = boost::statechart;


struct EvLoadingComplete: sc::event<EvLoadingComplete>
{
public:
    EvLoadingComplete();
};

struct EvReadyForSelling: sc::event<EvReadyForSelling>
{
public:
    EvReadyForSelling();
};


struct EvInsertMoney: sc::event<EvInsertMoney>
{
    EvInsertMoney(int value)
        : m_money_value(value)
    {

    }

    int m_money_value;
};

struct EvProductSelected: sc::event<EvProductSelected>
{
    EvProductSelected(int number)
        : m_selected_product(number)
    {

    }

    int m_selected_product;
};

struct EvCupDispensed: sc::event<EvCupDispensed>
{
};

struct EvProductDispensed: sc::event<EvProductDispensed>
{
};

struct EvChangeDispensed: sc::event<EvChangeDispensed>
{
};

struct EvMenuEntry: sc::event<EvMenuEntry>
{
};

struct EvReadyForWork: sc::event<EvReadyForWork>
{
};

struct EvTechnicianItemSelected: sc::event<EvTechnicianItemSelected>
{
};

struct EvStatisticsItemSelected: sc::event<EvStatisticsItemSelected>
{
};

struct EvSettingsItemSelected: sc::event<EvSettingsItemSelected>
{
};

struct EvError: sc::event<EvError>
{
    EvError(int code)
            : m_error_code(code)
    {
        
    }
    
    int m_error_code;
};