function nVF = TamanhoDoSanha(nVE1, nVE2, nVC)

%Essa fun��o calcula a nota necess�ria na VF de um aluno atrav�s de suas
%notas nas VEs e na VC
nVF = (20 - nVC - (nVE1+nVE2)/2)*0.5;
if(nVF<4)
    nVF=4;  
end