#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target practice Dummy") {}
Dummy::~Dummy() {}

ATarget *Dummy::clone() const {return (new Dummy());}