#include<iostream>
#include<cstring>
#include<conio.h>
#include<cstdlib>
using namespace std;
class Element{
    private:
    string element_name , standard_state , electronic_configuration , boiling_point , melting_point , atomic_radius , atomic_mass , symbol ; 
    float atomic_number , electronegativity , year_discovered ;
    public:
    Element(string Element_name , string Standard_state , string Electronic_configuration , float Atomic_number , string Atomic_mass , float Electronegativity , string Boiling_point , string Melting_point , string Atomic_radius , float Year_discovered , string Symbol ){
        element_name = Element_name ;
        standard_state = Standard_state ;
        electronic_configuration = Electronic_configuration ;
        atomic_number = Atomic_number ;
        atomic_mass = Atomic_mass ;
        electronegativity = Electronegativity ;
        boiling_point = Boiling_point ;
        melting_point = Melting_point ;
        atomic_radius = Atomic_radius ;
        year_discovered = Year_discovered ;
        symbol = Symbol ;
    }
    void show_details(){
        cout << "\nThe name of element       : " << element_name << endl ;
        cout << "The Symbol of element     : " << symbol << endl ;
        cout << "Atomic number Of element  : " << atomic_number << endl ;
        cout << "Atomic mass of element    : " << atomic_mass << endl ;
        cout << "Electronic Configuration  : " << electronic_configuration << endl ;
        cout << "Standard state of element : " << standard_state << endl ;
        cout << "Electronegetivity         : " << electronegativity << endl ;
        cout << "Boiling Point of element  : " << boiling_point << endl ;
        cout << "Melting Point of element  : " << melting_point << endl ;
        cout << "Atomic radius of element  : " << atomic_radius << endl ;
        cout << "Year of Discovery         : " << year_discovered << endl ;
    }
}; 
int main(){
    string name ;
    char choice ;
    Element hydrogen      ( "Hydrogen"    , "Gas"   , "1s1"               , 1  , "1.0080 u"  , 2.2  , "20.28 K" , "13.81 K"    , "120 pm" , 1766 , "H"  ) ;  
    Element helium        ( "Helium"      , "Gas"   , "1s2"               , 2  , "4.0026 u"  , -1   , "4.22 K"  , "0.95 K"     , "140 pm" , 1868 , "He" ) ;
    Element lithium       ( "Lithium"     , "Solid" , "2s1"               , 3  , "6.941 u "  , 0.98 , "1330 K"  , "453.65 K"   , "152 pm" , 1817 , "Li" ) ;
    Element beryllium     ( "Beryllium"   , "Solid" , "2s2"               , 4  , "9.0122 u"  , 1.57 , "2750 K"  , "1560 K"     , "112 pm" , 1797 , "Be" ) ;
    Element boron         ( "Boron"       , "Solid" , "2s2 2p1"           , 5  , "10.81 u"   , 2.04 , "4200 K"  , "2349 K"     , "98 pm"  , 1808 , "B"  ) ;
    Element carbon        ( "Carbon"      , "Solid" , "2s2 2p2"           , 6  , "12.011 u"  , 2.55 , "4827 K"  , "3823 K"     , "70 pm"  , 1789 , "C"  ) ;
    Element nitrogen      ( "Nitrogen"    , "Gas"   , "2s2 2p3"           , 7  , "14.007 u"  , 3.04 , "77.36 K" , "63.15 K"    , "65 pm"  , 1772 , "N"  ) ;
    Element oxygen        ( "Oxygen"      , "Gas"   , "2s2 2p4"           , 8  , "15.999 u"  , 3.44 , "90.20 K" , "54.36 K"    , "60 pm"  , 1774 , "O"  ) ;
    Element fluorine      ( "Fluorine"    , "Gas"   , "2s2 2p5"           , 9  , "18.998 u"  , 3.98 , "85.03 K" , "53.53 K"    , "50 pm"  , 1670 , "F"  ) ;
    Element neon          ( "Neon"        , "Gas"   , "2s2 2p6"           , 10 , "20.180 u"  , -1   , "27.07 K" , "24.56 K"    , "38 pm"  , 1898 , "Ne" ) ;
    Element sodium        ( "Sodium"      , "Solid" , "3s1"               , 11 , "22.990 u"  , 0.93 , "1156 K"  , "370.95 K"   , "186 pm" , 1807 , "Na" ) ;
    Element magnesium     ( "Magnesium"   , "Solid" , "3s2"               , 12 , "24.305 u"  , 1.31 , "650 K"   , "923 K"      , "160 pm" , 1755 , "Mg" ) ;
    Element aluminium     ( "Aluminum"    , "Solid" , "3s2 3p1"           , 13 , "26.982 u"  , 1.61 , "2792 K"  , "933.47 K"   , "143 pm" , 1825 , "Al" ) ;
    Element silicon       ( "Silicon"     , "Solid" , "3s2 3p2"           , 14 , "28.085 u"  , 1.9  , "3538 K"  ,  "1687 K"    , "111 pm" , 1824 , "Si" ) ;
    Element phosphorus    ( "Phosphorus " , "Solid" , "3s2 3p3"           , 15 , "30.974 u"  , 2.19 , "553 K"   ,  "317.3 K"   , "98 pm"  , 1669 , "P"  ) ; 
    Element sulfur        ( "Sulfur    "  , "Solid" , "3s2 3p4"           , 16 , "32.06 u"   , 2.58 , "717.8 K" , "388.36 K"   , "88 pm"  , 1669 , "S"  ) ;
    Element chlorine      ( "Chlorine"    , "Gas"   , "3s2 3p5"           , 17 , "35.45 u"   , 3.16 , "239.11 K", "171.6 K"    , "79 pm"  , 1774 , "Cl" ) ; 
    Element argon         ( "Argon"       , "Gas"   , "3s2 3p6"           , 18 , "39.95 u"   , -1   , "87.30 K" , "83.80 K"    , "71 pm"  , 1894 , "Ar" ) ;
    Element potassium     ( "Potassium"   , "Solid" , "4s1"               , 19 ,  "39.098 u" , 0.82 , "1032 K"  , "336.53 K"   , "243 pm" , 1807 , "K"  ) ;
    Element calcium       ( "Calcium"     , "Solid" , "4s2"               , 20 , "40.078 u"  , 1.0  , "1757 K"  , "1115 K"     , "194 pm" , 1808 , "Ca" ) ;
    Element scandium      ( "Scandium"    , "Solid" , "4s2 3d1"           , 21 , "44.956 u"  , 1.36 , "3109 K"  , "1814 K"     , "184 pm" , 1879 , "Sc" ) ;
    Element titanium      ( "Titanium"    , "Solid" , "4s2 3d2"           , 22 , "47.867 u"  , 1.54 , "3560 K"  , "1941 K"     , "176 pm" , 1791 , "Ti" ) ;
    Element vanadium      ( "Vanadium"    , "Solid" , "4s2 3d3"           , 23 , "50.942 u"  , 1.63 , "3680 K"  , "2183 K"     , "171 pm" , 1803 , "V"  ) ;
    Element chromium      ( "Chromium"    , "Solid" , "4s1 3d5"           , 24 , "51.996 u"  , 1.66 , "2944 K"  , "2180 K"     , "166 pm" , 1797 , "Cr" ) ;
    Element manganese     ( "Manganese"   , "Solid" , "4s2 3d5"           , 25 , "54.938 u"  , 1.55 , "2334 K"  , "1519 K"     , "161 pm" , 1774 , "Mg" ) ;
    Element iron          ( "Iron"        , "Solid" , "4s2 3d6"           , 26 , "55.845 u"  , 1.83 , "3134 K"  , "1808 K"     , "156 pm" , 1787 , "Fe" ) ;
    Element cobalt        ( "Cobalt"      , "Solid" , "4s2 3d7"           , 27 , "58.933 u"  , 1.88 , "3200 K"  , "1768 K"     , "152 pm" , 1739 , "Co" ) ;
    Element nickel        ( "Nickel"      , "Solid" , "4s2 3d8"           , 28 , "58.693 u"  , 1.91 , "3186 K"  , "1728 K"     , "149 pm" , 1751 , "Ni" ) ;
    Element copper        ( "Copper"      , "Solid" , "4s1 3d10"          , 29 , "63.546 u"  , 1.9  , "2835 K"  , "1357.77 K"  , "145 pm" , -8000, "Cu" ) ;
    Element zinc          ( "Zinc"        , "Solid" , "4s2 3d10"          , 30 , "65.38 u"   , 1.65 , "1180 K"  , "693.85 K"   , "142 pm" , 1746 , "Zn" ) ;
    Element gallium       ( "Gallium"     , "Solid" , "4s2 3d10 4p1"      , 31 , "69.723 u"  , 1.81 , "2477 K"  , "302.9146 K" , "136 pm" , 1875 , "Ga" ) ;
    Element germanium     ( "Germanium"   , "Solid" , "4s2 3d10 4p2"      , 32 , "72.63 u"   , 2.01 , "3106 K"  , "1211.4 K"   , "122 pm" , 1886 , "Ge" ) ;
    Element arsenic       ( "Arsenic"     , "Solid" , "4s2 3d10 4p3"      , 33 , "74.922 u"  , 2.18 , "876 K"   , "1090 K"     , "119 pm" , 1250 , "As" ) ;
    Element selenium      ( "Selenium"    , "Solid" , "4s2 3d10 4p4"      , 34 , "78.971 u"  , 2.55 , "958 K"   , "494 K"      , "116 pm" , 1817 , "Se" ) ;
    Element bromine       ( "Bromine"     , "Liquid", "4s2 3d10 4p5"      , 35 , "79.904 u"  , 2.96 , "331.95 K", "265.8 K"    , "114 pm" , 1826 , "Br" ) ;
    Element krypton       ( "Krypton"     , "Gas"   , "4s2 3d10 4p6"      , 36 , "83.798 u"  , 3.0  , "119.93 K", "115.79 K"   , "110 pm" , 1898 , "Kr" ) ;
    Element rubidium      ( "Rubidium"    , "Solid" , "5s1"               , 37 , "85.468 u"  , 1.63 , "312.46 K", "312.46 K"   , "211 pm" , 1861 , "Rb" ) ;
    Element strontium     ( "Strontium"   , "Solid" , "5s2"               , 38 , "87.62 u"   , 2.64 , "1655 K"  , "1050 K"     , "192 pm" , 1790 , "Sr" ) ;
    Element yttrium       ( "Yttrium"     , "Solid" , "5s2 4d1"           , 39 , "88.906 u"  , 1.22 , "3611 K"  , "1795 K"     , "162 pm" , 1794 , "Y"  ) ;
    Element zirconium     ( "Zirconium"   , "Solid" , "5s2 4d2"           , 40 , "91.224 u"  , 1.33 , "4682 K"  , "2128 K"     , "148 pm" , 1789 , "Zr" ) ;
    Element niobium       ( "Niobium"     , "Solid" , "5s2 4d4"           , 41 , "92.906 u"  , 1.6  , "5015 K"  , "2750 K"     , "145 pm" , 1801 , "Nb" ) ;
    Element molybdenum    ( "Molybdenum"  , "Solid" , "5s2 4d5"           , 42 , "95.95 u"   , 2.16 , "4912 K"  , "2896 K"     , "139 pm" , 1778 , "Mo" ) ;
    Element technetium    ( "Technetium"  , "Solid" , "5s2 4d5 5p6"       , 43 , "98 u"      , 1.9  , "4538 K"  , "2430 K"     , "136 pm" , 1937 , "Tc" ) ;
    Element ruthenium     ( "Ruthenium"   , "Solid" , "5s1 4d7"           , 44 , "101.07 u"  , 2.2  , "4425 K"  , "2607 K"     , "134 pm" , 1844 , "Ru" ) ;
    Element rhodium       ( "Rhodium"     , "Solid" , "5s1 4d8"           , 45 , "102.91 u"  , 2.28 , "3968 K"  , "2237 K"     , "134 pm" , 1803 , "Rh" ) ;
    Element palladium     ( "Palladium"   , "Solid" , "4d10"              , 46 , "106.42 u"  , 2.2  , "3236 K"  , "1828.05 K"  , "137 pm" , 1803 , "Pd" ) ;
    Element silver        ( "Silver"      , "Solid" , "5s1 4d10"          , 47 , "107.87 u"  , 1.93 , "2435 K"  , "1234.93 K"  , "144 pm" , -3000, "Ag" ) ;
    Element cadmium       ( "Cadmium"     , "Solid" , "5s2 4d10"          , 48 , "112.41 u"  , 1.69 , "594.22 K", "594.22 K"   , "151 pm" , 1817 , "Cd" ) ;
    Element indium        ( "Indium"      , "Solid" , "5s2 4d10 5p1"      , 49 , "114.82 u"  , 1.78 , "429.75 K", "2345 K"     , "167 pm" , 1863 , "In" ) ;
    Element tin           ( "Tin"         , "Solid" , "5s2 4d10 5p2"      , 50 , "118.71 u"  , 1.96 , "505.08 K", "2875 K"     , "145 pm" , -2100, "Sn" ) ;    
    Element antimony      ( "Antimony"    , "Solid" , "5s2 4d10 5p3"      , 51 , "121.76 u"  , 2.05 , "903.91 K", "1860 K"     , "133 pm" , -1600, "Sb" ) ;
    Element tellurium     ( "Tellurium"   , "Solid" , "5s2 4d10 5p4"      , 52 , "127.6 u"   , 2.1  , "722.66 K", "1261 K"     , "123 pm" , 1783 , "Te" ) ;
    Element iodine        ( "Iodine"      , "Solid" , "5s2 4d10 5p5"      , 53 , "126.9 u"   , 2.66 , "386.85 K", "457.4 K"    , "115 pm" , 1811 , "I"  ) ;
    Element xenon         ( "Xenon"       , "Gas"   , "5s2 4d10 5p6"      , 54 , "131.29 u"  , 2.6  , "161.36 K", "165.03 K"   , "108 pm" , 1898 , "Xe" ) ;
    Element cesium        ( "Cesium"      , "Solid" , "6s1"               , 55 , "132.91 u"  , 0.79 , "301.7 K" , "301.7 K"    , "298 pm" , 1860 , "Cs" ) ;
    Element barium        ( "Barium"      , "Solid" , "6s2"               , 56 , "137.33 u"  , 0.89 , "1000 K"  , "2170 K"     , "253 pm" , 1808 , "Ba" ) ;
    Element lanthanum     ( "Lanthanum"   , "Solid" , "5d1 6s2"           , 57 , "138.91 u"  , 1.1  , "1193 K"  , "3737 K"     , "244 pm" , 1839 , "La" ) ;
    Element cerium        ( "Cerium"      , "Solid" , "4f1 5d1 6s2"       , 58 , "140.12 u"  , 1.12 , "1068 K"  , "3716 K"     , "235 pm" , 1803 , "Ce" ) ;
    Element praseodymium  ( "Praseodymium", "Solid" , "4f3 5d1 6s2"       , 59 , "140.91 u"  , 1.13 , "1208 K"  , "3793 K"     , "239 pm" , 1885 , "Pr" ) ;
    Element neodymium     ( "Neodymium"   , "Solid" , "4f4 5d1 6s2"       , 60 , "144.24 u"  , 1.14 , "1297 K"  , "3347 K"     , "229 pm" , 1885 , "Nd" ) ;
    Element promethium    ( "Promethium"  , "Solid" , "4f5 5d1 6s2"       , 61 , "145 u"     , 1.13 , "1315 K"  , "3273 K"     , "236 pm" , 1945 , "Pm" ) ;
    Element samarium      ( "Samarium"    , "Solid" , "4f6 5d1 6s2"       , 62 , "150.36 u"  , 1.17 , "1345 K"  , "2067 K"     , "229 pm" , 1879 , "Sm" ) ;
    Element europium      ( "Europium"    , "Solid" , "4f7 5d1 6s2"       , 63 , "152 u"     , 1.2  , "1099 K"  , "1802 K"     , "233 pm" , 1901 , "Eu" ) ;
    Element gadolinium    ( "Gadolinium"  , "Solid" , "4f7 5d1 6s2"       , 64 , "157.25 u"  , 1.2  , "1585 K"  , "3273 K"     , "233 pm" , 1880 , "Gd" ) ;
    Element terbium       ( "Terbium"     , "Solid" , "4f9 5d1 6s2"       , 65 , "158.93 u"  , 1.2  , "1629 K"  , "3503 K"     , "225 pm" , 1843 , "Tb" ) ;
    Element dysprosium    ( "Dysprosium"  , "Solid" , "4f10 5d1 6s2"      , 66 , "162.5 u"   , 1.22 , "1680 K"  , "2840 K"     , "228 pm" , 1886 , "Dy" ) ;
    Element holmium       ( "Holmium"     , "Solid" , "4f11 5d1 6s2"      , 67 , "164.93 u"  , 1.23 , "1734 K"  , "2993 K"     , "226 pm" , 1878 , "Ho" ) ;
    Element erbium        ( "Erbium"      , "Solid" , "4f12 5d1 6s2"      , 68 , "167.26 u"  , 1.24 , "1802 K"  , "3141 K"     , "226 pm" , 1842 , "Er" ) ;
    Element thulium       ( "Thulium"     , "Solid" , "4f13 5d1 6s2"      , 69 , "168.93 u"  , 1.25 , "1818 K"  , "2223 K"     , "222 pm" , 1879 , "Tm" ) ;
    Element ytterbium     ( "Ytterbium"   , "Solid" , "4f14 5d1 6s2"      , 70 , "173.05 u"  , 1.1  , "1097 K"  , "1469 K"     , "222 pm" , 1878 , "Yb" ) ;
    Element lutetium      ( "Lutetium"    , "Solid" , "4f14 5d1 6s2"      , 71 , "174.97 u"  , 1.27 , "1936 K"  , "3675 K"     , "217 pm" , 1907 , "Lu" ) ;
    Element hafnium       ( "Hafnium"     , "Solid" , "6s2 4f14 5d2"      , 72 , "178.49 u"  , 1.3  , "2506 K"  , "4876 K"     , "208 pm" , 1923 , "Hf" ) ;
    Element tantalum      ( "Tantalum"    , "Solid" , "6s2 4f14 5d3"      , 73 , "180.95 u"  , 1.5  , "3290 K"  , "5731 K"     , "200 pm" , 1802 , "Ta" ) ;
    Element tungsten      ( "Tungsten"    , "Solid" , "6s2 4f14 5d4"      , 74 , "183.84 u"  , 2.36 , "3695 K"  , "5828 K"     , "193 pm" , 1783 , "W"  ) ;
    Element rhenium       ( "Rhenium"     , "Solid" , "6s2 4f14 5d5"      , 75 , "186.21 u"  , 1.9  , "3459 K"  , "5869 K"     , "188 pm" , 1925 , "Re" ) ;
    Element osmium        ( "Osmium"      , "Solid" , "6s2 4f14 5d6"      , 76 , "190.23 u"  , 2.2  , "3306 K"  , "5285 K"     , "185 pm" , 1803 , "Os" ) ;
    Element iridium       ( "Iridium"     , "Solid" , "6s2 4f14 5d7"      , 77 , "192.22 u"  , 2.2  , "2719 K"  , "4701 K"     , "180 pm" , 1803 , "Ir" ) ;
    Element platinum      ( "Platinum"    , "Solid" , "6s1 4f14 5d9"      , 78 , "195.08 u"  , 2.28 , "2041.4 K", "4098 K"     , "177 pm" , 1735 , "Pt" ) ;
    Element gold          ( "Gold"        , "Solid" , "6s1 4f14 5d10"     , 79 , "196.97 u"  , 1.93 , "1337.3 K", "3129 K"     , "174 pm" , -3000, "Au" ) ;
    Element mercury       ( "Mercury"     , "Liquid", "6s2 4f14 5d10"     , 80 , "200.59 u"  , 1.55 , "234.32 K", "629.88 K"   , "171 pm" , -1500, "Hg" ) ;
    Element thallium      ( "Thallium"    , "Solid" , "6s2 4f14 5d10 6p1" , 81 , "204.38 u"  , 1.62 , "577 K"   , "1746 K"     , "156 pm" , 1861 , "Tl" ) ;
    Element lead          ( "Lead"        , "Solid" , "6s2 4f14 5d10 6p2" , 82 , "207.2 u"   , 2.33 , "600.61 K", "2022 K"     , "154 pm" , -5000, "Pb" ) ;
    Element bismuth       ( "Bismuth"     , "Solid" , "6s2 4f14 5d10 6p3" , 83 , "208.98 u"  , 2.02 , "544.7 K" , "1837 K"     , "143 pm" , 1735 , "Bi" ) ;
    Element polonium      ( "Polonium"    , "Solid" , "6s2 4f14 5d10 6p4" , 84 , "209 u"     , 2.0  , "527 K"   , "1235 K"     , "135 pm" , 1898 , "Po" ) ;
    Element astatine      ( "Astatine"    , "Solid" , "6s2 4f14 5d10 6p5" , 85 , "210 u"     , 2.2  , "575 K"   , "610 K"      , "127 pm" , 1940 , "At" ) ;
    Element radon         ( "Radon"       , "Gas"   , "6s2 4f14 5d10 6p6" , 86 , "222 u"     , 0.0  , "202 K"   , "211.4 K"    , "120 pm" , 1900 , "Rn" ) ;
    Element francium      ( "Francium"    , "Solid" , "7s1"               , 87 , "223 u"     , 0.7  , "300 K"   , "950 K"      , "348 pm" , 1939 , "Fr" ) ;
    Element radium        ( "Radium"      , "Solid" , "7s2"               , 88 , "226 u"     , 0.9  , "973 K"   , "1413 K"     , "283 pm" , 1898 , "Ra" ) ;
    Element actinium      ( "Actinium"    , "Solid" , "6d1 7s2"           , 89 , "227 u"     , 1.1  , "1324 K"  , "3471 K"     , "260 pm" , 1899 , "Ac" ) ;
    Element thorium       ( "Thorium"     , "Solid" , "6d2 7s2"           , 90 , "232.04 u"  , 1.3  , "2023 K"  , "5093 K"     , "237 pm" , 1828 , "Th" ) ;
    Element protactinium  ( "Protactinium", "Solid" , "5f2 6d1 7s2"       , 91 , "231.04 u"  , 1.5  , "1841 K"  , "4300 K"     , "243 pm" , 1913 , "Pa" ) ;
    Element uranium       ( "Uranium"     , "Solid" , "5f3 6d1 7s2"       , 92 , "238.03 u"  , 1.38 , "1405.3 K", "4131 K"     , "240 pm" , 1789 , "U"  ) ;
    Element neptunium     ( "Neptunium"   , "Solid" , "5f4 6d1 7s2"       , 93 , "237 u"     , 1.36 , "917 K"   , "4273 K"     , "221 pm" , 1940 ,"Np"  ) ;
    Element plutonium     ( "Plutonium"   , "Solid" , "5f6 7s2"           , 94 , "244 u"     , 1.28 , "912.5 K" , "3501 K"     , "243 pm" , 1940 , "Pu" ) ;
    Element americium     ( "Americium"   , "Solid" , "5f7 7s2"           , 95 , "243 u"     , 1.13 , "1449 K"  , "2880 K"     , "244 pm" , 1944 , "Am" ) ;
    Element curium        ( "Curium"      , "Solid" , "5f7 6d1 7s2"       , 96 , "247 u"     , 1.28 , "1613 K"  , "3383 K"     , "245 pm" , 1944 , "Cm" ) ;
    Element berkelium     ( "Berkelium"   , "Solid" , "5f9 7s2"           , 97 , "247 u"     , 1.3  , "1259 K"  , "2900 K"     , "244 pm" , 1949 , "Bk" ) ;
    Element californium   ( "Californium" , "Solid" , "5f10 7s2"          , 98 , "251 u"     , 1.3  , "1173 K"  , "1743 K"     , "245 pm" , 1950 , "Cf" ) ;
    Element einsteinium   ( "Einsteinium" , "Solid" , "5f11 7s2"          , 99 , "252 u"     , 1.3  , "1133 K"  , "1269 K"     , "245 pm" , 1952 , "Es" ) ;
    Element fermium       ( "Fermium"     , "Solid" , "5f12 7s2"          , 100, "257 u"     , 1.3  , "1800 K"  , "1800 K"     , "245 pm" , 1952 , "Fm" ) ;
    Element mendelevium   ( "Mendelevium" , "Solid" , "5f13 7s2"          , 101, "258 u"     , 1.3  , "1100 K"  , "1100 K"     , "246 pm" , 1955 , "Md" ) ;
    Element nobelium      ( "Nobelium"    , "Solid" , "5f14 7s2"          , 102, "259 u"     , 1.3  , "1100 K"  , "1100 K"     , "246 pm" , 1957 , "No" ) ;
    Element lawrencium    ( "Lawrencium"  , "Solid" , "5f14 6d1 7s2"      , 103, "266 u"     , 1.3  , "1900 K"  , "1900 K"     , "246 pm" , 1961 , "Lr" ) ;
    Element rutherfordium ( "Rutherfordium" , "Solid" , "7s2 6d2"         , 104, "267 u"     , 1.3  , "2400 K"  , "2400 K"     , "246 pm" , 1964 , "Rf" ) ;
    Element dubnium       ( "Dubnium"       , "Solid" , "7s2 6d3"         , 105, "268 u"     , 1.3  , "1900 K"  , "1900 K"     , "246 pm" , 1967 , "Db" ) ;
    Element seaborgium    ( "Seaborgium"    , "Solid" , "7s2 6d4"         , 106, "269 u"     , 1.3  , "1900 K"  , "1900 K"     , "246 pm" , 1974 , "Sg" ) ;
    Element bohrium       ( "Bohrium"       , "Solid" , "7s2 6d5"         , 107, "270 u"     , 1.3  , "1900 K"  , "1900 K"     , "246 pm" , 1981 , "Bh" ) ;
    Element hassium       ( "Hassium"       , "Solid" , "7s2 6d6"         , 108, "277 u"     , 1.3  , "126 K"   , "126 K"      , "246 pm" , 1984 , "Hs" ) ;
    Element meitnerium    ( "Meitnerium"    , "Solid" , "7s2 6d7"         , 109, "278 u"     , 1.3  , "1100 K"  , "1100 K"     , "246 pm" , 1982 , "Mt" ) ;
    Element darmstadtium  ( "Darmstadtium"  , "Solid" , "7s2 6d8"         , 110, "281 u"     , 1.3  , "1100 K"  , "1100 K"     , "246 pm" , 1994 , "Ds" ) ;
    Element roentgenium   ( "Roentgenium"   , "Solid" , "7s2 6d9"         , 111, "282 u"     , 1.3  , "1100 K"  , "1100 K"     , "246 pm" , 1994 , "Rc" ) ;
    Element copernicium   ( "Copernicium"   , "Solid" , "7s2 6d10"        , 112, "285 u"     , 1.3  , "1120 K"  , "1120 K"     , "246 pm" , 1996 , "Cn" ) ;
    Element nihonium      ( "Nihonium"      , "Solid" , "7s2 7p1"         , 113, "286 u"     , 1.3  , "700 K"   , "700 K"      , "246 pm" , 2004 , "Nh" ) ;
    Element flerovium     ( "Flerovium"     , "Solid" , "7s2 7p2"         , 114, "289 u"     , 1.3  , "340 K"   , "340 K"      , "246 pm" , 1998 , "Fl" ) ;
    Element moscovium     ( "Moscovium"     , "Solid" , "7s2 7p3"         , 115, "290 u"     , 1.3  , "700 K"   , "700 K"      , "246 pm" , 2003 , "Mc" ) ;
    Element livermorium   ( "Livermorium"   , "Solid" , "7s2 7p4"         , 116, "293 u"     , 1.3  , "709 K"   , "709 K"      , "246 pm" , 2000 , "Lv" ) ;
    Element tennessine    ( "Tennessine"    , "Solid" , "7s2 7p5"         , 117, "294 u"     , 1.3  , "723 K"   , "723 K"      , "246 pm" , 2010 , "Ts" ) ;
    Element oganesson     ( "Oganesson"     , "Solid" , "7s2 7p6"         , 118, "294 u"     , 1.3  , "350 K"   , "350 K"      , "246 pm" , 2002 , "Og" ) ;
do{
    system("cls");    
    cout << "Enter the element name / Symbol / Atomic number to search for element : " ;
    getline(cin , name ) ;
    if(name == "hydrogen"  || name == "1" || name == "H" || name == "h"){
        hydrogen.show_details();
    }  
    else if(name == "helium"  || name == "2" || name == "He" || name == "he"){
        helium.show_details();
    }  
    else if(name == "lithium"  || name == "3" || name == "li" || name == "Li"){
        lithium.show_details();
    }  
    else if(name == "berylium"  || name == "4" || name == "be" || name == "Be"){
        beryllium.show_details();
    }  
    else if(name == "boron"  || name == "5" || name == "B" || name == "b"){
        boron.show_details();
    }  
    else if(name == "carbon"  || name == "6" || name == "C" || name == "c"){
        carbon.show_details();
    }  
    else if(name == "nitrogenn"  || name == "7" || name == "N" || name == "n"){
        nitrogen.show_details();
    }  
    else if(name == "oxygen"  || name == "8" || name == "O" || name == "o"){
        oxygen.show_details();
    }  
    else if(name == "fluorine"  || name == "9" || name == "F" || name == "f"){
        fluorine.show_details();
    }  
    else if(name == "neon"  || name == "10" || name == "Ne" || name == "ne"){
        neon.show_details();
    }  
    else if(name == "sodium"  || name == "11" || name == "Na" || name == "na"){
        sodium.show_details();
    }  
    else if(name == "magnesium"  || name == "12" || name == "Mg" || name == "mg"){
        magnesium.show_details();
    }  
    else if(name == "aluminium"  || name == "13" || name == "Al" || name == "al"){
        aluminium.show_details();
    }  
    else if(name == "silicon"  || name == "14" || name == "Si" || name == "si"){
        silicon.show_details();
    }  
    else if(name == "phosphorus"  || name == "15" || name == "P" || name == "p" ){
        phosphorus.show_details();
    }  
    else if(name == "sulfur"  || name == "16" || name == "S" || name == "s"){
        sulfur.show_details();
    }  
    else if(name == "chlorine"  || name == "17" || name == "Cl" || name == "cl"){
        chlorine.show_details();
    }  
    else if(name == "argon"  || name == "18" || name == "Ar" || name == "ar"){
        argon.show_details();
    }  
    else if(name == "potasium"  || name == "19" || name == "K" || name == "k"){
        potassium.show_details();
    }  
    else if(name == "calsium"  || name == "20" || name == "Ca" || name == "ca"){
        calcium.show_details();
    }
    else if(name == "scandium"  || name == "21" || name == "Sc" || name == "sc"){
    scandium.show_details();
}  
else if(name == "titanium"  || name == "22" || name == "Ti" || name == "ti"){
    titanium.show_details();
}  
else if(name == "vanadium"  || name == "23" || name == "V" || name == "v"){
    vanadium.show_details();
}  
else if(name == "chromium"  || name == "24" || name == "Cr" || name == "cr"){
    chromium.show_details();
}  
else if(name == "manganese"  || name == "25" || name == "Mn" || name == "mn"){
    manganese.show_details();
}  
else if(name == "iron"  || name == "26" || name == "Fe" || name == "fe"){
    iron.show_details();
}  
else if(name == "cobalt"  || name == "27" || name == "Co" || name == "co"){
    cobalt.show_details();
}  
else if(name == "nickel"  || name == "28" || name == "Ni" || name == "ni"){
    nickel.show_details();
}  
else if(name == "copper"  || name == "29" || name == "Cu" || name == "cu"){
    copper.show_details();
}  
else if(name == "zinc"  || name == "30" || name == "Zn" || name == "zn"){
    zinc.show_details();
}  
else if(name == "gallium"  || name == "31" || name == "Ga" || name == "ga"){
    gallium.show_details();
}  
else if(name == "germanium"  || name == "32" || name == "Ge" || name == "ge"){
    germanium.show_details();
}  
else if(name == "arsenic"  || name == "33" || name == "As" || name == "as"){
    arsenic.show_details();
}  
else if(name == "selenium"  || name == "34" || name == "Se" || name == "se"){
    selenium.show_details();
}  
else if(name == "bromine"  || name == "35" || name == "Br" || name == "br"){
    bromine.show_details();
}  
else if(name == "krypton"  || name == "36" || name == "Kr" || name == "kr"){
    krypton.show_details();
}  
else if(name == "rubidium"  || name == "37" || name == "Rb" || name == "rb"){
    rubidium.show_details();
}  
else if(name == "strontium"  || name == "38" || name == "Sr" || name == "sr"){
    strontium.show_details();
}  
else if(name == "yttrium"  || name == "39" || name == "Y" || name == "y"){
    yttrium.show_details();
}  
else if(name == "zirconium"  || name == "40" || name == "Zr" || name == "zr"){
    zirconium.show_details();
}  
else if(name == "niobium"  || name == "41" || name == "Nb" || name == "nb"){
    niobium.show_details();
}  
else if(name == "molybdenum"  || name == "42" || name == "Mo" || name == "mo"){
    molybdenum.show_details();
}  
else if(name == "technetium"  || name == "43" || name == "Tc" || name == "tc"){
    technetium.show_details();
}  
else if(name == "ruthenium"  || name == "44" || name == "Ru" || name == "ru"){
    ruthenium.show_details();
}  
else if(name == "rhodium"  || name == "45" || name == "Rh" || name == "rh"){
    rhodium.show_details();
}  
else if(name == "palladium"  || name == "46" || name == "Pd" || name == "pd"){
    palladium.show_details();
}  
else if(name == "silver"  || name == "47" || name == "Ag" || name == "ag"){
    silver.show_details();
}  
else if(name == "cadmium"  || name == "48" || name == "Cd" || name == "cd"){
    cadmium.show_details();
}  
else if(name == "indium"  || name == "49" || name == "In" || name == "in"){
    indium.show_details();
}  
else if(name == "tin"  || name == "50" || name == "Sn" || name == "sn"){
    tin.show_details();
}  
else if(name == "antimony"  || name == "51" || name == "Sb" || name == "sb"){
    antimony.show_details();
}  
else if(name == "tellurium"  || name == "52" || name == "Te" || name == "te"){
    tellurium.show_details();
}  
else if(name == "iodine"  || name == "53" || name == "I" || name == "i"){
    iodine.show_details();
}  
else if(name == "xenon"  || name == "54" || name == "Xe" || name == "xe"){
    xenon.show_details();
}  
else if(name == "cesium"  || name == "55" || name == "Cs" || name == "cs"){
    cesium.show_details();
}  
else if(name == "barium"  || name == "56" || name == "Ba" || name == "ba"){
    barium.show_details();
}  
else if(name == "lanthanum"  || name == "57" || name == "La" || name == "la"){
    lanthanum.show_details();
}  
else if(name == "cerium"  || name == "58" || name == "Ce" || name == "ce"){
    cerium.show_details();
}  
else if(name == "praseodymium"  || name == "59" || name == "Pr" || name == "pr"){
    praseodymium.show_details();
}  
else if(name == "neodymium"  || name == "60" || name == "Nd" || name == "nd"){
    neodymium.show_details();
}  
else if(name == "promethium"  || name == "61" || name == "Pm" || name == "pm"){
    promethium.show_details();
}  
else if(name == "samarium"  || name == "62" || name == "Sm" || name == "sm"){
    samarium.show_details();
}  
else if(name == "europium"  || name == "63" || name == "Eu" || name == "eu"){
    europium.show_details();
}  
else if(name == "gadolinium"  || name == "64" || name == "Gd" || name == "gd"){
    gadolinium.show_details();
}  
else if(name == "terbium"  || name == "65" || name == "Tb" || name == "tb"){
    terbium.show_details();
}  
else if(name == "dysprosium"  || name == "66" || name == "Dy" || name == "dy"){
    dysprosium.show_details();
}  
else if(name == "holmium"  || name == "67" || name == "Ho" || name == "ho"){
    holmium.show_details();
}  
else if(name == "erbium"  || name == "68" || name == "Er" || name == "er"){
    erbium.show_details();
}  
else if(name == "thulium"  || name == "69" || name == "Tm" || name == "tm"){
    thulium.show_details();
}  
else if(name == "ytterbium"  || name == "70" || name == "Yb" || name == "yb"){
    ytterbium.show_details();
}  
else if(name == "lutetium"  || name == "71" || name == "Lu" || name == "lu"){
    lutetium.show_details();
}  
else if(name == "hafnium"  || name == "72" || name == "Hf" || name == "hf"){
    hafnium.show_details();
}  
else if(name == "tantalum"  || name == "73" || name == "Ta" || name == "ta"){
    tantalum.show_details();
}  
else if(name == "tungsten"  || name == "74" || name == "W" || name == "w"){
    tungsten.show_details();
}  
else if(name == "rhenium"  || name == "75" || name == "Re" || name == "re"){
    rhenium.show_details();
}  
else if(name == "osmium"  || name == "76" || name == "Os" || name == "os"){
    osmium.show_details();
}  
else if(name == "iridium"  || name == "77" || name == "Ir" || name == "ir"){
    iridium.show_details();
}  
else if(name == "platinum"  || name == "78" || name == "Pt" || name == "pt"){
    platinum.show_details();
}  
else if(name == "gold"  || name == "79" || name == "Au" || name == "au"){
    gold.show_details();
}  
else if(name == "mercury"  || name == "80" || name == "Hg" || name == "hg"){
    mercury.show_details();
}  
else if(name == "thallium"  || name == "81" || name == "Tl" || name == "tl"){
    thallium.show_details();
}  
else if(name == "lead"  || name == "82" || name == "Pb" || name == "pb"){
    lead.show_details();
}  
else if(name == "bismuth"  || name == "83" || name == "Bi" || name == "bi"){
    bismuth.show_details();
}  
else if(name == "polonium"  || name == "84" || name == "Po" || name == "po"){
    polonium.show_details();
}  
else if(name == "astatine"  || name == "85" || name == "At" || name == "at"){
    astatine.show_details();
}  
else if(name == "radon"  || name == "86" || name == "Rn" || name == "rn"){
    radon.show_details();
}  
else if(name == "francium"  || name == "87" || name == "Fr" || name == "fr"){
    francium.show_details();
}  
else if(name == "radium"  || name == "88" || name == "Ra" || name == "ra"){
    radium.show_details();
}  
else if(name == "actinium"  || name == "89" || name == "Ac" || name == "ac"){
    actinium.show_details();
}  
else if(name == "thorium"  || name == "90" || name == "Th" || name == "th"){
    thorium.show_details();
}  
else if(name == "protactinium"  || name == "91" || name == "Pa" || name == "pa"){
    protactinium.show_details();
}  
else if(name == "uranium"  || name == "92" || name == "U" || name == "u"){
    uranium.show_details();
}  
else if(name == "neptunium"  || name == "93" || name == "Np" || name == "np"){
    neptunium.show_details();
}  
else if(name == "plutonium"  || name == "94" || name == "Pu" || name == "pu"){
    plutonium.show_details();
}  
else if(name == "americium"  || name == "95" || name == "Am" || name == "am"){
    americium.show_details();
}  
else if(name == "curium"  || name == "96" || name == "Cm" || name == "cm"){
    curium.show_details();
}  
else if(name == "berkelium"  || name == "97" || name == "Bk" || name == "bk"){
    berkelium.show_details();
}  
else if(name == "californium"  || name == "98" || name == "Cf" || name == "cf"){
    californium.show_details();
}  
else if(name == "einsteinium"  || name == "99" || name == "Es" || name == "es"){
    einsteinium.show_details();
}  
else if(name == "fermium"  || name == "100" || name == "Fm" || name == "fm"){
    fermium.show_details();
}  
else if(name == "mendelevium"  || name == "101" || name == "Md" || name == "md"){
    mendelevium.show_details();
}  
else if(name == "nobelium"  || name == "102" || name == "No" || name == "no"){
    nobelium.show_details();
}  
else if(name == "lawrencium"  || name == "103" || name == "Lr" || name == "lr"){
    lawrencium.show_details();
}  
else if(name == "rutherfordium"  || name == "104" || name == "Rf" || name == "rf"){
    rutherfordium.show_details();
}  
else if(name == "dubnium"  || name == "105" || name == "Db" || name == "db"){
    dubnium.show_details();
}  
else if(name == "seaborgium"  || name == "106" || name == "Sg" || name == "sg"){
    seaborgium.show_details();
}  
else if(name == "bohrium"  || name == "107" || name == "Bh" || name == "bh"){
    bohrium.show_details();
}  
else if(name == "hassium"  || name == "108" || name == "Hs" || name == "hs"){
    hassium.show_details();
}  
else if(name == "meitnerium"  || name == "109" || name == "Mt" || name == "mt"){
    meitnerium.show_details();
}  
else if(name == "darmstadtium"  || name == "110" || name == "Ds" || name == "ds"){
    darmstadtium.show_details();
}  
else if(name == "roentgenium"  || name == "111" || name == "Rg" || name == "rg"){
    roentgenium.show_details();
}  
else if(name == "copernicium"  || name == "112" || name == "Cn" || name == "cn"){
    copernicium.show_details();
}  
else if(name == "nihonium"  || name == "113" || name == "Nh" || name == "nh"){
    nihonium.show_details();
}  
else if(name == "flerovium"  || name == "114" || name == "Fl" || name == "fl"){
    flerovium.show_details();
}  
else if(name == "moscovium"  || name == "115" || name == "Mc" || name == "mc"){
    moscovium.show_details();
}  
else if(name == "livermorium"  || name == "116" || name == "Lv" || name == "lv"){
    livermorium.show_details();
}  
else if(name == "tennessine"  || name == "117" || name == "Ts" || name == "ts"){
    tennessine.show_details();
}  
else if(name == "oganesson"  || name == "118" || name == "Og" || name == "og"){
    oganesson.show_details();
}  
else{
	cout << "\nIncorrect Choice " << endl ;
}
    cout << "\nDo you want to search another element Press Y : Press N for Quit : " << endl ;
    cout << "\nEnter your choice : " ;
    cin >> choice ;
    cin.ignore();
    }while( choice == 'Y' || choice == 'y') ;  
    return 0 ;
} 
