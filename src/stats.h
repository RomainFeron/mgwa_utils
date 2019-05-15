#pragma once
#include <algorithm>
#include <fstream>
#include <iostream>
#include <math.h>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>
#include "output.h"
#include "parser.h"
#include "utils.h"

typedef std::unordered_map<std::string, std::vector<BaseData>> MafMetrics;

void stats(Parameters& parameters);