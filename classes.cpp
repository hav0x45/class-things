#include <iostream>
#include <string>

int main() {

    // Julkinen ja staattinen esimerkkimuuttuja
    static std::string nimi;

    // Julkinen arvosanamuuttuja
    static int arvosana;
    
    // Aloitetaan alkuluokan määrittely
    class Henkilö {
    
        // Julkisen luokan muuttuja
        public:
            static void asetaNimi(std::string ParameterName) {
                nimi = ParameterName;
            }

        // Arvosanafunktio
        static void asetaArvosana(int uusiArvosana) {
            arvosana = uusiArvosana;
        }
        
        // Arvosanan hakufunktio
        static int haeArvosana() {
            return arvosana;
        }
    
        // Tittelinhaku funktio
        static std::string haeTitteli() {
            std::string returnString = "tekn. yo. " + nimi;
            return returnString;
        }
    };

    // Aseta arvon nimi
    Henkilö::asetaNimi("Teemu");

    // Haetaan ja tulostetaan titteli
    std::cout << Henkilö::haeTitteli() << std::endl;

    // Aseta arvosana
    Henkilö::asetaArvosana(5);

    // Tulostetaan arvosana
    std::cout << "Arvosana: " << Henkilö::haeArvosana();

    return 0;
}
