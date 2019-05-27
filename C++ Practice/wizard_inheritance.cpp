#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
  // https://www.hackerrank.com/challenges/magic-spells/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
  string name = spell->revealScrollName();
  Fireball *fire = dynamic_cast<Fireball *>(spell);
  Waterbolt *water = dynamic_cast<Waterbolt *>(spell);
  Frostbite *frost = dynamic_cast<Frostbite *>(spell);
  Thunderstorm *thunder = dynamic_cast<Thunderstorm *>(spell);
  if (fire) {
    fire->revealFirepower();
    }
    else if(water){
        water->revealWaterpower();
    }
    else if (frost) {
      frost->revealFrostpower();
    }
    else if (thunder){
        thunder->revealThunderpower();
    }
    else{
        SpellJournal book;
        int total=0;
        int last_pos=0;
        string journal = book.read();
        int m = journal.length();
        int n = name.length();
        int L[m + 1][n + 1];
        int i, j;

        for (i = 0; i <= m; i++) {
          for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
              L[i][j] = 0;

            else if (journal[i - 1] == name[j - 1])
              L[i][j] = L[i - 1][j - 1] + 1;

            else
              L[i][j] = max(L[i - 1][j], L[i][j - 1]);
          }
        }

        total =  L[m][n];
        cout<<total<<endl;
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}