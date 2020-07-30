module Foo
    using CxxWrap
    @wrapmodule "build/lib/libtestlib.so"

    f = Foo.osservazione()

    function somma(a, b, f=f)
        Foo.sum(f, a, b)
    end

    function sottrazione(a, b, f=f)
        Foo.diff(f, a, b)
    end
end

Foo.somma(2, 2)
Foo.sottrazione(10, 9)