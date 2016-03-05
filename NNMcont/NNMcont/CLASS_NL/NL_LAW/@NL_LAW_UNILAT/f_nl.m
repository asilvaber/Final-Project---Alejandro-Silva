function f = f_nl(obj,x)

f=0;
if x>0
    f=f_nl(obj.nl_law,x);
end

end