function E = Energy_nl(obj,x)
if abs(x)<=obj.a
    E=1/2*obj.k1*x^2;
else
    E=1/2*obj.k1*obj.a^2+obj.k1*obj.a*(abs(x)-obj.a)+1/2*obj.k2*(abs(x)-obj.a)^2;
end
end
