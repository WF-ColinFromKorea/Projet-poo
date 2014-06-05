#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cassert>
#include <stdexcept>
#include <QApplication>

using namespace std ;

#include "interpretenpinpi.hpp"


    database["+"] = &interpretenpi::addition;
    database["-"] = &interpretenpi::soustraction;
    database["*"] = &interpretenpi::multiplication;
    database["/"] = &interpretenpi::division;
    database["push"] = &interpretenpi::push;
    database["pushstr"] = &interpretenpi::pushstr;
    database["pop"] = &interpretenpi::pop;
    database["popstr"] = &interpretenpi::popstr;
    database["copy"] = &interpretenpi::copy;
    database["copystr"] = &interpretenpi::copystr;
    database["print"] = &interpretenpi::print;
    database["printstr"] = &interpretenpi::printstr;
    database["display"] = &interpretenpi::display;
    database["displaystr"] = &interpretenpi::displaystr;
    database["count"] = &interpretenpi::count;
    database["countstr"] = &interpretenpi::countstr;
    database["swap"] = &interpretenpi::swap;
    database["swapstr"] = &interpretenpi::swapstr;
    database["sin"] = &interpretenpi::sin;
    database["cos"] = &interpretenpi::cos;
    database["tan"] = &interpretenpi::tan;
    database["sqrt"] = &interpretenpi::sqrt;
    database["trunc"] = &interpretenpi::trunc;
    database["line"] = &interpretenpi::line;
    database["color"] = &interpretenpi::color;
    database["drawstr"] = &interpretenpi::drawstr;
    database["exit"] = &interpretenpi::exit;
