function df = df_nl(obj,x)
if abs(x)<=obj.a
    df=obj.k1;
else
    df=obj.k2;
end
end

