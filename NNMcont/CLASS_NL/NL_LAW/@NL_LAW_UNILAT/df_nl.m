function J = df_nl(obj,x)

J=0;
if x>0
    J=df_nl(obj.nl_law,x);
end

end

