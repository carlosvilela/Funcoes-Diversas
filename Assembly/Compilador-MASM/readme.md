Execute o VisualStudio (O compilador MASM vem junto com o Visual C++ e no VS2012 fica dentro da pasta C:\Program Files\Microsoft Visual Studio 11.0\VC\bin - ML.exe)<br><br>
crie um projeto Visual C++ (WIN32):<br>
FILE -> New Project -> Visual C++ -> Win32<br>
na Application Wizzard faça: Next; em seguida va em Additional options e marque Empty project para criar um projeto vazio.<br><br>
crie um arquivo qualque<br>
na Solution Explorer adicione um novo item (Add New Item) e renomeie ele com a extensão *.asm<br><br>
para configurar, ainda na Solution Explorer, vá no seu projeto e com o botão direito do mouse vá em Build Costomizations e selecione a caixa MASM.<br>
em seguida vai no seu arquivo Assembly e com o botão direito do mouse vá em Property e em seguida no Item Type selecione Microsoft Macro Assembler. agora vai poder compilar normalmente seus códigos em assembly.<br><br>
.486<br>
.model tiny<br>
.code<br>
start:<br>
<br><br>
mov eax, 05h<br>
ret<br>
<br><br>

end start<br>
