program simpleConditional;
uses crt;
var a, b : real;

begin
   clrscr;
   write (sLineBreak + 'Write a value for a: ');
   readln (a);
   write (sLineBreak + 'Write a value for b: ');
   readln (b);

   writeln (sLineBreak + sLineBreak);

   if (a = b) then
      writeln ('a is equal to b')
   else
      writeln ('a is not equal to b');

   writeln (sLineBreak + sLineBreak);
   writeln ('Good Bye...');
end.
