#include <string>

class InputException
{
public:
    InputException(std::string Eingabe)
        : m_Eingabe(Eingabe)
    {  };

    std::string getError() const {
        return "Die Eingabe \"" + m_Eingabe + "\" ist fehlerhaft!\n";
    }

private:
    string m_Eingabe;
};


