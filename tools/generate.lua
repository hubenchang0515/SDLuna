if #arg ~= 1 then
	print(#arg,"Need a argument.")
	os.exit()
end

fp = io.open(arg[1])
out = io.open(arg[1] .. ".cpp","w")
out:write("#include <luaMagic/luaMagic.h>\n\n")
out:write("int " .. arg[1] .. "_bind(lua_State* L)\n{\n")

fun = ""
while true do
	fun = fp:read("l")
	if fun == nil then
		break
	end
	out:write(string.format("\tluaMagic::bind(L, \"%s\", %s);\n", fun, fun))
end


out:write("}")

out:close()
fp:close()