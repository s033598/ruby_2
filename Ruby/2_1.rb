#https://www.tutorialspoint.com/ruby/ruby_comments.htm
#http://www.evc-cit.info/cit020/beginning-programming/chp_02/user_input.html
#https://www.tutorialspoint.com/ruby/ruby_if_else.htm
#
puts "Iveskite studento pazimi:" #Išvedam tekstą į ekraną "Iveskite studento pazimi:";
a = gets().to_i #Apsirašom a kintamajį, į jį prašom vartotojo įvest reikšmę, kurią konvertuojam į int.
if a > 5 #Jeigu vartotojo įvesta reikšmė yra didesnė už 5, tai
   puts "Islaike" #į ekraną išvedame tekstą "islaike"
else #kitu atvėju
   puts "Neislaike" #į ekraną išvedame tekstą "neislaike"
end