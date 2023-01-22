#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(const std::string &name, const std::string &effects) {
    this->name = name;
    this->effects = effects;
}
ASpell::ASpell(const ASpell &other) {
    *this = other;
}

ASpell &ASpell::operator=(const ASpell &other) {
    this->name = other.name;
    this->effects = other.effects;
    return (*this);
}
ASpell::~ASpell() {}

std::string const &ASpell::getName() const {return (this->name);}
std::string const &ASpell::getEffects() const {return (this->effects);}

void ASpell::launch(const ATarget &aTarget_ref) const {
    aTarget_ref.getHitBySpell(*this);
}