puts "Iveskite 3 skaicius:" #Į ekraną išvedame tekstą "Iveskite 3 skaicius:"
a = gets().to_i #Prašome vartotojo įvesti reikšmę, kurią vėliau konvertuojame į int tipą.
b = gets().to_i #Prašome vartotojo įvesti reikšmę, kurią vėliau konvertuojame į int tipą.
c = gets().to_i #Prašome vartotojo įvesti reikšmę, kurią vėliau konvertuojame į int tipą.

biggest = 0 #Sukuriame kintamajį biggest ir priskiriame jam reikšmę 0;
error = false #Sukuriame kintamajį error ir jam priskiriame boolean reikšmę false;

if(a > b && a > c) #Jeigu a reikšmė bus didesnė už b ir c reikšmes,
  biggest = a #tai į biggest kintamajį priskirsime a reikšmę.
elsif(b > a && b > c) #Jeigu b reikšmė bus didesnė už a ir c reikšmes,
  biggest = b #tai į biggest kintamajį priskirsime b reikšmę.
elsif(c > a && c > b) #Jeigu c reikšmė bus didesnė už a ir b reikšmes,
  biggest = c #tai į biggest kintamajį priskirsime c reikšmę.
else #Kitu atveju error kintamajam priskirsime true reikšmę, ir į ekraną išvesime tekstą "Klaida";
  error = true
  puts "Klaida"
end

if error == false #Jeigu nesuveikė praeitam if blocke else reikšmė, tai išvedam tekstą "Didžiausias:" į ekraną ir biggest reikšmę..
  puts "Didziausias: #{biggest}"
end