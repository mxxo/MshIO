#pragma once

#include <MshIO/MshSpec.h>

#include <iostream>

namespace mshio {

void save_elements(std::ostream& out, const MshSpec& spec);

}
