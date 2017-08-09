(function($) {
  Drupal.behaviors.FibonacciCalculatorUptrend = {
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

function calculateFibonacciUptrend() {
  var hprice, lprice, R111, R138, R100, R76, R61, R50, R38, R23, R0, R139, R101, R77, R62, R51, R39, R24, R1;
  hprice=document.getElementById("high").value;
  lprice=document.getElementById("low").value;
  if(hprice=="") {
    alert('Please Enter High Price');
    document.getElementById("high").focus();
    return false;
  }
  else if(lprice=="") {
    alert('Please Enter Low Price');
    document.getElementById("low").focus();
    return true;
  }
  else if(parseFloat(lprice) >= parseFloat(hprice)) {
    alert('High Price should be greater than Low Price');
    document.getElementById("low").focus();
    return true;
  } 
  else {
    document.getElementById("result").style.display = "inline";
    R139 = (138.2 / 100 * lprice) + ((100 - 138.2) / 100 * hprice);
    R138 = R139.toFixed(2);
    R101 = (100 / 100 * lprice) + ((100 - 100) / 100 * hprice);
    R100 = R101.toFixed(2);
    R77 = (76.4 / 100 * lprice) + ((100 - 76.4) / 100 * hprice);
    R76 = R77.toFixed(2);
    R62 = (61.8 / 100 * lprice) + ((100 - 61.8) / 100 * hprice);
    R61 = R62.toFixed(2);
    R51 = (50 / 100 * lprice) + ((100 - 50) / 100 * hprice);
    R50 = R51.toFixed(2);
    R39 = (38.2 / 100 * lprice) + ((100 - 38.2) / 100 * hprice);
    R38 = R39.toFixed(2);
    R24 = (23.6 / 100 * lprice) + ((100 - 23.6) / 100 * hprice);
    R23 = R24.toFixed(2);
    R1 = (0 / 100 * lprice) + ((100 - 0) / 100 * hprice);
    R0 = R1.toFixed(2);
    document.getElementById("ans1").innerHTML = R100.valueOf();
    document.getElementById("ans2").innerHTML= R61.valueOf();
    document.getElementById("ans3").innerHTML= R50.valueOf();
    document.getElementById("ans4").innerHTML= R38.valueOf();
    document.getElementById("ans5").innerHTML= R23.valueOf();
    document.getElementById("ans6").innerHTML= R0.valueOf();
    document.getElementById("ans7").innerHTML= R138.valueOf();
    document.getElementById("ans8").innerHTML = R76.valueOf();
      return false;
  } 
}

function reset() {
  document.getElementById("result").style.display="none";
  document.getElementById("high").value="";
  document.getElementById("low").value="";
  document.getElementById("ans1").innerHTML="";
  document.getElementById("ans2").innerHTML="";
  document.getElementById("ans3").innerHTML="";
  document.getElementById("ans4").innerHTML="";
  document.getElementById("ans5").innerHTML="";
  document.getElementById("ans6").innerHTML="";
  document.getElementById("ans7").innerHTML="";
  document.getElementById("ans8").innerHTML="";
}

function isNumberKey(evt) {
  var charCode = (evt.which) ? evt.which : event.keyCode
  if (charCode != 46 && charCode > 31 && (charCode < 48 || charCode > 57))
    return false;

    return true;
}
