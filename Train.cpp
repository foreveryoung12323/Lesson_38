#include "Train.h"

Train::Train()
{
    station = "undefined";
    number = "undefined";
    depacture_time = "undefined";
}

Train::Train(string station, string number, string depacture_time)
{
    this->station = station;
    this->number = number;
    this->depacture_time = depacture_time;
}

string Train::getStation() const
{
    return station;
}

string Train::getNumber() const
{
    return number;
}

string Train::getDepacture() const
{
    return depacture_time;
}

void Train::setDepacture(string time)
{
    depacture_time = time;
}

bool Train::operator<(const Train& right) const
{
    return this->depacture_time < right.depacture_time;
}
