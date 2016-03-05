function f = f_nl(obj,x)
if abs(x)<=obj.a
    f=obj.k1*x;
else
    f=sign(x)*(obj.k1*obj.a+obj.k2*(abs(x)-obj.a));
end
end

