function E = Energy_nl(obj,x)

E=0;
if x>0
    E=Energy_nl(obj.nl_law,x);
end

end

