(function($) {
  Drupal.behaviors.InvestmentCalculator = {
    attach: function (context, settings) {
      /*$(document).on({
        mouseover: function () {
          $(this).parent().next().css("display", "block");
        },
        mouseout: function () {
          $(this).parent().next().css("display", "none");
        }
      }, "a.help-item");*/
    }
  };
})(jQuery);


function calculateInvestment() {
  var Present, Retirement, InvestmentPeriod, Investperiod, Annualrate, Annualrate1, Annualratevalue,  MonthlyInv, onetiomeInv;
  var Period, PercentRate, Factor_N, Factor_D, Factor, Investment_S, Investment_I;
  var test1, test2, test3, a1, a2, a3, a4, a5, a6;

  Annualrate=document.getElementById("rate").value; 
  Present=document.getElementById("presentage").value;
  Retirement = document.getElementById("retirementage").value; 

  if (Present=="") {
    alert('Please Enter Present Age');
    document.getElementById("presentage").focus();
    return false;
  }
  else if(Retirement=="") {
    alert('Please Enter Retirement Age');
    document.getElementById("retirementage").focus();
    return false;
  }
  else if(parseFloat(Present) >= parseFloat(Retirement)) {
    alert('Retirement Age should be greater than Present Age');
    document.getElementById("retirementage").focus();
    return false;
  }
  else if(Annualrate=="") {
    alert('Please Enter Expected Annual Rate');
    document.getElementById("rate").focus();
    return false;
  } 
  else if (Annualrate > 25) {
    alert('Please Enter Expected Annual Rate should be less than 25');
    document.getElementById("rate").focus();
    return false;
  }
  else if(document.getElementById("Amount").value=="") {
    if(Annualrate.value< Annualrate1) {
      alert('Please Expected Annual Rate should be less than 100');
      document.getElementById("rate").focus();
    }
    alert('Please Enter Amount to be accumulated');
    document.getElementById("Amount").focus();
    return false;
  }
  else {
    document.getElementById("result").style.display="inline";
    InvestmentPeriod= Retirement - Present;
    Annualratevalue = Annualrate/100;
    AccumulatedAmount = document.getElementById("Amount").value;
    a1 = 1+Annualratevalue/12;
    a2 = InvestmentPeriod*12;
    a3 = Math.pow(a1, a2);
    test2 = AccumulatedAmount/((a3-1)/(Annualratevalue/12))/a1;
    MonthlyInv = Math.floor(test2); ;
    onetiomeInv = Math.floor(AccumulatedAmount/Math.pow((1+Annualratevalue),(InvestmentPeriod)));                    
    document.getElementById("ans8").innerHTML = InvestmentPeriod;
    document.getElementById("ans9").innerHTML = MonthlyInv;
    document.getElementById("ans10").innerHTML = onetiomeInv;
      return false;
  } 
}

function resetInvestment() {
  document.getElementById("result").style.display="none";
  document.getElementById("presentage").value="";
  document.getElementById("retirementage").value="";
  document.getElementById("rate").value="";
  document.getElementById("Amount").value="";
  document.getElementById("ans8").innerHTML="";
  document.getElementById("ans9").innerHTML="";
  document.getElementById("ans10").innerHTML="";
}

function isNumberKey(evt) {
  var charCode = (evt.which) ? evt.which : evt.keyCode
  if (charCode != 46 && charCode > 31 && (charCode < 48 || charCode > 57))
    return false;

    return true;
}

function number(evt) {
  //if (((evt.keyCode > 15 && (evt.keyCode < 20 || evt.keyCode > 57))||evt.keyCode==32||evt.keyCode==33||(evt.keyCode > 34 && evt.keyCode < 39)||(evt.keyCode > 39 && evt.keyCode < 48)||evt.keyCode==47)&&evt.keyCode!=190) 
  var charCode = (evt.which) ? evt.which : evt.keyCode
  if (charCode > 31 && (charCode < 48 || charCode > 57) && charCode!=190)
     return false;
}

function isNumberKey1(evt) {
  var charCode = (evt.which) ? evt.which : evt.keyCode;
  if (charCode != 46 && charCode > 31 && (charCode < 48 || charCode > 57) && evt.keyCode!=190) {
    return false;
  }
    return true;
}

function cl_check(fld,typ) {
  if(typ=="int") {
    if(isNaN(fld.value)) {
      fld.value="";
      alert('Please enter a Number in the given field');
      alert(fld.value);
      fld.focus();
      return false;
    }
      return true;
  }
}
