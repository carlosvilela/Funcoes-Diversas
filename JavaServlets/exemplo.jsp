package servlets;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(name = "acesso", urlPatterns = {"/acesso", "/login"})
public class acesso extends HttpServlet {


    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        String Site = "https://www.unicarioca.edu.br/";
        String user = request.getParameter("usuario");
        String pass = request.getParameter("password");
        
        
        
        if ((user.equals("Maria")) && (pass.equals("Maria123"))){
        
            response.sendRedirect(Site);
            
            
        }else{
        
        
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            /* TODO output your page here. You may use following sample code. */
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Erro</title>");            
            out.println("</head>");
            out.println("<body>");
            out.println("<h1>Servlet acesso at " + request.getContextPath() + "</h1>");
            out.println("</body>");
            out.println("</html>");
        }

        }
    
    }

}
