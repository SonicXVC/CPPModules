#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(const std::string &type) {this->type = type;}
ATarget::ATarget(const ATarget &other) {*this = other;}
ATarget &ATarget::operator=(const ATarget &other) {
    this->type = other.type;
    return (*this);
}
ATarget::~ATarget() {}

std::string const &ATarget::getType() const {return(this->type);}

void ATarget::getHitBySpell(const ASpell &aSpell_ref) const {
    std::cout << this->type << " has been " << aSpell_ref.getEffects() << "!\n";
}