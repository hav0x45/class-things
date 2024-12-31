#include <iostream>
#include <string>

int main() {

    // Julkinen ja staattinen muuttuja
    static std::string nimi;

    // Julkinen arvosanamuuttuja
    int arvosana;

    // Aloitetaan alkuluokan määrittely
    class Henkilö {
    
        // Julkisen luokan muuttuja
        public:
            static void asetaNimi(std::string ParameterName) {
                nimi = ParameterName;
            }



        // Arvosanafunktio
        void asetaArvosana(int uusiArvosana) {
            arvosana = uusiArvosana;
        }
        
        // Arvosanan hakufunktio
        int haeArvosana() {
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

    // Haetaan titteli
    std::cout << Henkilö::haeTitteli();

    return 0;
}